//
//  Deck.h
//  Machismo
//
//  Created by MnnM on 3/13/14.
//  Copyright (c) 2014 MENGMENG.CHENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
