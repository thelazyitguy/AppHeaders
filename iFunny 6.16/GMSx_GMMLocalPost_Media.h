//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class NSString;

@interface GMSx_GMMLocalPost_Media : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasImageURL; // @dynamic hasImageURL;
@property(nonatomic) _Bool hasMediaType; // @dynamic hasMediaType;
@property(nonatomic) _Bool hasVideoURL; // @dynamic hasVideoURL;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *videoURL; // @dynamic videoURL;

@end
