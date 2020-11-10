//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchDataPersisting-Protocol.h"

@class NSString;
@protocol SPTLocalSettings;

@interface SPTSearchDataPersister : NSObject <SPTSearchDataPersisting>
{
    id <SPTLocalSettings> _localSettings;
    NSString *_key;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (id)loadData;
- (void)storeData:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

