//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/TINKDeterministicAead-Protocol.h>

@class NSString;

@interface TINKDeterministicAeadInternal : NSObject <TINKDeterministicAead>
{
    unique_ptr_3009830b _ccDeterministicAead;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct DeterministicAead *)ccDeterministicAead;
- (id)decryptDeterministically:(id)arg1 withAssociatedData:(id)arg2 error:(id *)arg3;
- (id)encryptDeterministically:(id)arg1 withAssociatedData:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithCCDeterministicAead:(unique_ptr_3009830b)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

