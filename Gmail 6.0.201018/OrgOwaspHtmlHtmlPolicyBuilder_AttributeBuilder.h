//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OrgOwaspHtmlHtmlPolicyBuilder;
@protocol JavaUtilList, OrgOwaspHtmlAttributePolicy;

@interface OrgOwaspHtmlHtmlPolicyBuilder_AttributeBuilder : NSObject
{
    OrgOwaspHtmlHtmlPolicyBuilder *this$0_;
    id <JavaUtilList> attributeNames_;
    id <OrgOwaspHtmlAttributePolicy> policy_;
}

- (void)dealloc;
- (id)onElementsWithNSStringArray:(id)arg1;
- (id)globally;
- (id)matchingWithBoolean:(_Bool)arg1 withJavaUtilSet:(id)arg2;
- (id)matchingWithBoolean:(_Bool)arg1 withNSStringArray:(id)arg2;
- (id)matchingWithComGoogleCommonBasePredicate:(id)arg1;
- (id)matchingWithJavaUtilRegexPattern:(id)arg1;
- (id)matchingWithOrgOwaspHtmlAttributePolicy:(id)arg1;

@end
