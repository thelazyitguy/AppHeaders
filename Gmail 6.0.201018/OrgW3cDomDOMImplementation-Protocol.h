//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class NSString;
@protocol OrgW3cDomDocument, OrgW3cDomDocumentType;

@protocol OrgW3cDomDOMImplementation <JavaObject>
- (id)getFeatureWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (id <OrgW3cDomDocument>)createDocumentWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withOrgW3cDomDocumentType:(id <OrgW3cDomDocumentType>)arg3;
- (id <OrgW3cDomDocumentType>)createDocumentTypeWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withNSString:(NSString *)arg3;
- (_Bool)hasFeatureWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
@end
