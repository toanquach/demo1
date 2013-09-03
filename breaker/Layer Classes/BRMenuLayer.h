//
//  BRMenuLayer.h
//  breaker
//
//  Created by Toan.Quach on 8/28/13.
//  Copyright 2013 Toan.Quach. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "SimpleAudioEngine.h"

@interface BRMenuLayer : CCLayer {
    BOOL isStartGame; // To prevent double-taps
}

@end
