//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, UFMDimensions;

@interface UFMImage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *content; // @dynamic content;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasImageDimension; // @dynamic hasImageDimension;
@property(nonatomic) _Bool hasMimeType; // @dynamic hasMimeType;
@property(retain, nonatomic) UFMDimensions *imageDimension; // @dynamic imageDimension;
@property(copy, nonatomic) NSString *mimeType; // @dynamic mimeType;

@end

