//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSConnectivity : NSObject
{
}

+ (id)current;
@property(readonly, nonatomic) unsigned long long type;
- (unsigned long long)typeForNetworkReachabilityFlags:(unsigned int)arg1;
- (_Bool)isFlagSet:(unsigned int)arg1 forFlags:(unsigned int)arg2;
@property(readonly, nonatomic) _Bool isConnected;

@end
