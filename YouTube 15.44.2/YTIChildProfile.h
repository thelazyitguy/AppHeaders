//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIApproximateAge, YTIAvatar;

@interface YTIChildProfile : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIApproximateAge *approximateAge; // @dynamic approximateAge;
@property(retain, nonatomic) YTIAvatar *avatar; // @dynamic avatar;
@property(nonatomic) _Bool hasApproximateAge; // @dynamic hasApproximateAge;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;

@end

