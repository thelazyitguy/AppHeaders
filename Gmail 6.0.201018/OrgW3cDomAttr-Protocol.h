//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "OrgW3cDomNode-Protocol.h"

@class NSString;
@protocol OrgW3cDomElement, OrgW3cDomTypeInfo;

@protocol OrgW3cDomAttr <OrgW3cDomNode, JavaObject>
- (_Bool)isId;
- (id <OrgW3cDomTypeInfo>)getSchemaTypeInfo;
- (id <OrgW3cDomElement>)getOwnerElement;
- (void)setValueWithNSString:(NSString *)arg1;
- (NSString *)getValue;
- (_Bool)getSpecified;
- (NSString *)getName;
@end
