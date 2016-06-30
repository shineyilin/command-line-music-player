/*
 * play.h
 *
 *  Created on: 2015年8月23日
 *      Author: admin
 */



#ifndef PLAY_H_
#define PLAY_H_

#define PLAY

#include "graphics.h"
#include "iostream"
#include <dirent.h>

using namespace std;


struct Music
{
	int    Music_lable;
	char   *Music_path;
	char   *Music_name;
	struct Music *up;
	struct Music *next;
};

struct Music *music;

//==================================================
char Path[60];
char *Way="D:\\KwDownload\\song\\热门经典老歌500首\\";
char Type[4]="*.*";
MUSIC mus;

//==================================================
int paly(struct Music *Num);      //
int playnext(struct Music *Num);  //
int palyup(struct Music *Num);    //
int playause(struct Music *Num);  //

//==================================================
int play()
{
		  char *musicpath;
		  char keyin;
		  static int n;
		  int length;

		  cout<<"on play now"<<endl;
		  musicpath=(char*)malloc( sizeof(music->Music_path)+sizeof(music->Music_name) );
		  sprintf(musicpath,"D:\\a-w\\Eclipse\\Music\Debug\\%s",music->Music_name);

		  cout<<"On Play :>> "<<music->Music_lable<<"."<<music->Music_name<<endl;
	      cout<<musicpath<<endl;

		  mus.OpenFile("2.mp3");
		  length=mus.GetLength();

		  mus.Play(0,length);
		 // while( mus.GetPlayStatus()==MUSIC_MODE_PLAY )
		  {
		      cout<<"h  "<<endl;
			  api_sleep(100);
		  }
		  while(1)
		  //while( mus.GetPlayStatus()==MUSIC_MODE_PLAY )
		  {
			  if ( kbhit() )
			  switch( getchar() )
			  {
				  cout<<++n<<" keyboard input"<<endl;
				  case ' ':
					  mus.Pause();break;
				  case 'e':
				  case 'E':
					  mus.Pause();break;
				  case 'w':
				      cout<<mus.GetLength()<<endl;
					  mus.Play(mus.GetPosition()+2000,length);break;

				  default :
				  break;
			  }
		  }
		  mus.Close();
		  return 0;
}



#endif /* PLAY_H_ */
