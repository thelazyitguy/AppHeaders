//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLOnesieDataSaverConfig-Protocol.h>

@class MLDataSaverBitrateCap, NSHashTable, NSString;

@interface MLOnesieDataSaverConfigImpl : NSObject <MLOnesieDataSaverConfig>
{
    NSHashTable *_observers;
    MLDataSaverBitrateCap *_dataSaverBitrateCap;
    _Bool _enabled;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)addDataSaverConfigObserver:(id)arg1;
- (void)updateWithDataSaverConfig:(id)arg1;
@property(readonly, nonatomic) long long bitrateCap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

