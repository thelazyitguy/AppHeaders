//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTICommand, YTICommentBadgeColorSupportedDatas, YTIFormattedString, YTIIcon;

@interface YTIAuthorCommentBadgeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool authorCreator; // @dynamic authorCreator;
@property(retain, nonatomic) YTICommand *authorEndpoint; // @dynamic authorEndpoint;
@property(retain, nonatomic) YTIFormattedString *authorText; // @dynamic authorText;
@property(nonatomic) _Bool authorUnifiedVerified; // @dynamic authorUnifiedVerified;
@property(retain, nonatomic) YTICommentBadgeColorSupportedDatas *color; // @dynamic color;
@property(nonatomic) _Bool hasAuthorCreator; // @dynamic hasAuthorCreator;
@property(nonatomic) _Bool hasAuthorEndpoint; // @dynamic hasAuthorEndpoint;
@property(nonatomic) _Bool hasAuthorText; // @dynamic hasAuthorText;
@property(nonatomic) _Bool hasAuthorUnifiedVerified; // @dynamic hasAuthorUnifiedVerified;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIconTooltip; // @dynamic hasIconTooltip;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *iconTooltip; // @dynamic iconTooltip;

@end
