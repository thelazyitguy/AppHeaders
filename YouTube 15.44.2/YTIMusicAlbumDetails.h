//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIMusicAlbumDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(retain, nonatomic) NSMutableArray *listenActionUrlsArray; // @dynamic listenActionUrlsArray;
@property(readonly, nonatomic) unsigned long long listenActionUrlsArray_Count; // @dynamic listenActionUrlsArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

