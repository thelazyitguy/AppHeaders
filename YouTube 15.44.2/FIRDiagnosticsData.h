//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/FIRCoreDiagnosticsData-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface FIRDiagnosticsData : NSObject <FIRCoreDiagnosticsData>
{
    NSMutableDictionary *_diagnosticObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *diagnosticObjects;
- (void)insertValue:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

