//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgApacheHarmonyXmlDomNodeImpl.h"

@class OrgApacheHarmonyXmlDomInnerNodeImpl;

@interface OrgApacheHarmonyXmlDomLeafNodeImpl : OrgApacheHarmonyXmlDomNodeImpl
{
    OrgApacheHarmonyXmlDomInnerNodeImpl *parent_;
    int index_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void).cxx_destruct;
- (void)__javaClone:(id)arg1;
- (_Bool)isParentOfWithOrgW3cDomNode:(id)arg1;
- (id)getPreviousSibling;
- (id)getParentNode;
- (id)getNextSibling;
- (id)initWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1;

@end
