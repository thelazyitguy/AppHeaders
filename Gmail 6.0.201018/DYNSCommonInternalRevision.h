//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangComparable-Protocol.h"

@class NSString;

@interface DYNSCommonInternalRevision : NSObject <JavaLangComparable>
{
}

+ (void)initialize;
- (_Bool)lessThanOrEqualWithDYNSCommonInternalRevision:(id)arg1;
- (_Bool)lessThanWithDYNSCommonInternalRevision:(id)arg1;
- (_Bool)greaterThanOrEqualWithDYNSCommonInternalRevision:(id)arg1;
- (_Bool)greaterThanWithDYNProtoReadRevision:(id)arg1;
- (_Bool)greaterThanWithDYNSCommonInternalRevision:(id)arg1;
- (int)compareToWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
