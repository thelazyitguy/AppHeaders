//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class GPBFloatValue;

@interface GTPColor : GPBMessage
{
}

+ (id)descriptor;
- (id)asm_toUIColor;

// Remaining properties
@property(retain, nonatomic) GPBFloatValue *alpha; // @dynamic alpha;
@property(nonatomic) float blue; // @dynamic blue;
@property(nonatomic) float green; // @dynamic green;
@property(nonatomic) _Bool hasAlpha; // @dynamic hasAlpha;
@property(nonatomic) float red; // @dynamic red;

@end
