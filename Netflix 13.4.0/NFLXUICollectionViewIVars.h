//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;

@interface NFLXUICollectionViewIVars : NSObject
{
    _Bool isProcessingQueue;
    NSMutableArray *serialQueue;
    CADisplayLink *displayLinkInstance;
}

+ (id)fetch:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLinkInstance; // @synthesize displayLinkInstance;
@property(nonatomic) _Bool isProcessingQueue; // @synthesize isProcessingQueue;
@property(retain, nonatomic) NSMutableArray *serialQueue; // @synthesize serialQueue;

@end

