//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIRenderer;

@interface YTIInsertShelfItemCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(nonatomic) _Bool hasItemIdentifier; // @dynamic hasItemIdentifier;
@property(retain, nonatomic) YTIRenderer *item; // @dynamic item;
@property(copy, nonatomic) NSString *itemIdentifier; // @dynamic itemIdentifier;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(readonly, nonatomic) int shelfIdentifierOneOfCase; // @dynamic shelfIdentifierOneOfCase;

@end

