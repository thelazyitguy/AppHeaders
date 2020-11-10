//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKMessageStrategy.h"

@class NSString;

@interface MMKDiscoveryRequestStrategy : MMKMessageStrategy
{
    NSString *_playerId;
    NSString *_customUrlScheme;
}

@property(retain, nonatomic) NSString *customUrlScheme; // @synthesize customUrlScheme=_customUrlScheme;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
- (void).cxx_destruct;
- (void)executeOnConnection:(id)arg1 transactionId:(id)arg2;
- (void)executeOnConnection:(id)arg1;
- (void)execute:(id)arg1 connection:(id)arg2 sharedSecret:(id)arg3;
- (id)supportedClassString;
- (id)initWithLogger:(id)arg1 playerId:(id)arg2 customUrlScheme:(id)arg3;

@end

