//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHRMetricAppStateInfo : NSObject
{
    _Bool _isForeground;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
- (id)initWithIsForeground:(_Bool)arg1 bundleIdentifier:(id)arg2;

@end

