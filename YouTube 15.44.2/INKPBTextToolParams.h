//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBFont, INKPBTextToolShadowParams;

@interface INKPBTextToolParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int alignment; // @dynamic alignment;
@property(retain, nonatomic) INKPBFont *font; // @dynamic font;
@property(nonatomic) _Bool hasAlignment; // @dynamic hasAlignment;
@property(nonatomic) _Bool hasFont; // @dynamic hasFont;
@property(nonatomic) _Bool hasShadow; // @dynamic hasShadow;
@property(retain, nonatomic) INKPBTextToolShadowParams *shadow; // @dynamic shadow;

@end

