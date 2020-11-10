//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIInfoCardImage, YTISkAdNetworkYTParameters;

@interface YTIInfoCardAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *eventArray; // @dynamic eventArray;
@property(readonly, nonatomic) unsigned long long eventArray_Count; // @dynamic eventArray_Count;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasIsPanelAction; // @dynamic hasIsPanelAction;
@property(nonatomic) _Bool hasLinkURL; // @dynamic hasLinkURL;
@property(nonatomic) _Bool hasPlayStoreURL; // @dynamic hasPlayStoreURL;
@property(nonatomic) _Bool hasPriority; // @dynamic hasPriority;
@property(nonatomic) _Bool hasSkAdNetworkParameters; // @dynamic hasSkAdNetworkParameters;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTIInfoCardImage *image; // @dynamic image;
@property(nonatomic) _Bool isPanelAction; // @dynamic isPanelAction;
@property(copy, nonatomic) NSString *linkURL; // @dynamic linkURL;
@property(copy, nonatomic) NSString *playStoreURL; // @dynamic playStoreURL;
@property(copy, nonatomic) NSString *priority; // @dynamic priority;
@property(retain, nonatomic) YTISkAdNetworkYTParameters *skAdNetworkParameters; // @dynamic skAdNetworkParameters;
@property(copy, nonatomic) NSString *target; // @dynamic target;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

