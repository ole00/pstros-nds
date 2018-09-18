/* **************************************************************************
 This file is part of the Pstros J2ME execution environment 
 
 Copyright (C) 2005-2007, Marek Olejnik
 
 Disclaimer of Warranty
 
 These software programs are available to the user without any license fee or
 royalty on an "as is" basis.  The copyright-holder disclaims any and all 
 warranties, whether express, implied, or statuary, including any implied 
 warranties or merchantability or of fitness for a particular  purpose. In no 
 event shall the copyright-holder be liable for any incidental, punitive, 
 or consequential damages of any kind whatsoever arising from the use 
 of these programs.
 
 This disclaimer of warranty extends to the user of these programs and user's
 customers, employees, agents, transferees, successors, and assigns.

 Maintainers:
 Marek Olejnik - ole00@post.cz

***************************************************************************/
package javax.microedition.media.control;

import javax.microedition.media.Player;


public class PlayerVolumeControl implements VolumeControl{
	
	private Player player;
	private boolean muted;

	public PlayerVolumeControl(Player p) {
		player = p;
	}
	
	public int getLevel() {
		if (player != null) {
			return player.emuGetVolumeLevel();
		}
		return 0;
	}

	public boolean isMuted() {
		return muted;
	}

	public int setLevel(int level) {
		if (player != null) {
			return player.emuSetVolumeLevel(level);
		}
		return 0;
	}

	public void setMute(boolean mute) {
		muted = mute;
	}

	

}