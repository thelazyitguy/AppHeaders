//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface ALXPlaybackFailedEventPlaybackState : JSONModel
{
    NSString *_token;
    long long _offsetInMilliseconds;
    NSString *_playerActivity;
}

@property(retain, nonatomic) NSString *playerActivity; // @synthesize playerActivity=_playerActivity;
@property(nonatomic) long long offsetInMilliseconds; // @synthesize offsetInMilliseconds=_offsetInMilliseconds;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithToken:(id)arg1 offsetInMilliseconds:(long long)arg2 playerActivity:(id)arg3;

@end
