//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIMusicEntityReference, YTIRenderer;

@interface YTIMusicDataBoundAssociatedListRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *associatedCollectionType; // @dynamic associatedCollectionType;
@property(copy, nonatomic) NSString *associatedPlaylistType; // @dynamic associatedPlaylistType;
@property(readonly, nonatomic) int associatedTypeOneOfCase; // @dynamic associatedTypeOneOfCase;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(nonatomic) _Bool hasShelfMold; // @dynamic hasShelfMold;
@property(retain, nonatomic) YTIRenderer *shelfMold; // @dynamic shelfMold;

@end

