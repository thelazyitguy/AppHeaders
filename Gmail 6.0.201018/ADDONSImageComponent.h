//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class ADDONSBorderStyle, ADDONSImageCropStyle, NSString;

@interface ADDONSImageComponent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *altText; // @dynamic altText;
@property(retain, nonatomic) ADDONSBorderStyle *borderStyle; // @dynamic borderStyle;
@property(retain, nonatomic) ADDONSImageCropStyle *cropStyle; // @dynamic cropStyle;
@property(nonatomic) _Bool hasAltText; // @dynamic hasAltText;
@property(nonatomic) _Bool hasBorderStyle; // @dynamic hasBorderStyle;
@property(nonatomic) _Bool hasCropStyle; // @dynamic hasCropStyle;
@property(nonatomic) _Bool hasImageURL; // @dynamic hasImageURL;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;

@end

