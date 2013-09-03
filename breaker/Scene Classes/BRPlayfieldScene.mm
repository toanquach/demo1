//
//  BRPlayfieldScene.m
//  breaker
//
//  Created by Toan.Quach on 8/28/13.
//  Copyright 2013 Toan.Quach. All rights reserved.
//

#import "BRPlayfieldScene.h"
#import "BRPlayfieldLayer.h"

@implementation BRPlayfieldScene

+(id)scene
{
   	CCScene *scene = [CCScene node];
	BRPlayfieldLayer *layer = [BRPlayfieldLayer node];
	[scene addChild: layer];
	return scene;
}

@end
