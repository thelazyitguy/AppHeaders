//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJ2WifiNetwork.h"

@class NSString;

@interface WJ2WifiConnectionDetails : WJ2WifiNetwork
{
    long long _state;
    NSString *_stateDescription;
}

+ (id)toString:(long long)arg1;
@property(retain, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end
