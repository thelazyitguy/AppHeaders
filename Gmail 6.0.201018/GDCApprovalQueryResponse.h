//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GDCApprovalQueryResponse : GPBMessage
{
}

+ (id)descriptor;
+     // Error parsing type: @24@0:8r^{ApprovalQueryResponse=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{WeakRepeatedPtrField<drive::ds::Approval>=(?={RepeatedPtrField<drive::ds::Approval>=^{Arena}ii^{Rep}})}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}i}16, name: newFromCpp:

// Remaining properties
@property(retain, nonatomic) NSMutableArray *approvalArray; // @dynamic approvalArray;
@property(readonly, nonatomic) unsigned long long approvalArray_Count; // @dynamic approvalArray_Count;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) int status; // @dynamic status;

@end
