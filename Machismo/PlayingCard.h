//
//  PlayingCard.h
//  Machismo
//
//  Created by MnnM on 3/13/14.
//  Copyright (c) 2014 MENGMENG.CHENG. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
