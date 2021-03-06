//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIShelfInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *channelIdsArray; // @dynamic channelIdsArray;
@property(readonly, nonatomic) unsigned long long channelIdsArray_Count; // @dynamic channelIdsArray_Count;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasSourceChannelId; // @dynamic hasSourceChannelId;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) NSMutableArray *playlistIdsArray; // @dynamic playlistIdsArray;
@property(readonly, nonatomic) unsigned long long playlistIdsArray_Count; // @dynamic playlistIdsArray_Count;
@property(copy, nonatomic) NSString *sourceChannelId; // @dynamic sourceChannelId;
@property(nonatomic) int style; // @dynamic style;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

