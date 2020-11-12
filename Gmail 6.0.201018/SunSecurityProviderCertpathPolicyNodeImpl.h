//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecurityCertPolicyNode-Protocol.h"

@class JavaUtilHashSet, NSString;

@interface SunSecurityProviderCertpathPolicyNodeImpl : NSObject <JavaSecurityCertPolicyNode>
{
    SunSecurityProviderCertpathPolicyNodeImpl *mParent_;
    JavaUtilHashSet *mChildren_;
    NSString *mValidPolicy_;
    JavaUtilHashSet *mQualifierSet_;
    _Bool mCriticalityIndicator_;
    JavaUtilHashSet *mExpectedPolicySet_;
    _Bool mOriginalExpectedPolicySet_;
    int mDepth_;
    _Bool isImmutable_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)policyToStringWithNSString:(id)arg1;
- (void)dealloc;
- (id)asString;
- (id)getPolicyNodesValidWithInt:(int)arg1 withNSString:(id)arg2;
- (id)getPolicyNodesExpectedHelperWithInt:(int)arg1 withNSString:(id)arg2 withBoolean:(_Bool)arg3;
- (id)getPolicyNodesExpectedWithInt:(int)arg1 withNSString:(id)arg2 withBoolean:(_Bool)arg3;
- (void)getPolicyNodesWithInt:(int)arg1 withJavaUtilSet:(id)arg2;
- (id)getPolicyNodesWithInt:(int)arg1;
- (id)copyTreeWithSunSecurityProviderCertpathPolicyNodeImpl:(id)arg1;
- (id)copyTree;
- (void)deleteChildWithJavaSecurityCertPolicyNode:(id)arg1;
- (void)pruneWithInt:(int)arg1;
- (void)addExpectedPolicyWithNSString:(id)arg1;
- (void)addChildWithSunSecurityProviderCertpathPolicyNodeImpl:(id)arg1;
- (void)setImmutable;
- (_Bool)isImmutable;
@property(readonly, copy) NSString *description;
- (_Bool)isCritical;
- (id)getExpectedPolicies;
- (id)getPolicyQualifiers;
- (id)getValidPolicy;
- (int)getDepth;
- (id)getChildren;
- (id)getParent;
- (id)initPackagePrivateWithSunSecurityProviderCertpathPolicyNodeImpl:(id)arg1 withSunSecurityProviderCertpathPolicyNodeImpl:(id)arg2;
- (id)initPackagePrivateWithSunSecurityProviderCertpathPolicyNodeImpl:(id)arg1 withNSString:(id)arg2 withJavaUtilSet:(id)arg3 withBoolean:(_Bool)arg4 withJavaUtilSet:(id)arg5 withBoolean:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
