//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DGNSyncSourceVersion : NSObject
{
    long long _syncSource;
    long long _syncSourceVersion;
}

@property(readonly, nonatomic) long long syncSourceVersion; // @synthesize syncSourceVersion=_syncSourceVersion;
@property(readonly, nonatomic) long long syncSource; // @synthesize syncSource=_syncSource;
- (id)initWithSyncSource:(long long)arg1 version:(long long)arg2;

@end

