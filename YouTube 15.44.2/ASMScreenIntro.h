//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ASMImage, ASMResourceKey, NSString;

@interface ASMScreenIntro : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasLinkAccessibilityLabel; // @dynamic hasLinkAccessibilityLabel;
@property(nonatomic) _Bool hasLinkTarget; // @dynamic hasLinkTarget;
@property(nonatomic) _Bool hasLinkText; // @dynamic hasLinkText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) ASMImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *linkAccessibilityLabel; // @dynamic linkAccessibilityLabel;
@property(retain, nonatomic) ASMResourceKey *linkTarget; // @dynamic linkTarget;
@property(copy, nonatomic) NSString *linkText; // @dynamic linkText;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
