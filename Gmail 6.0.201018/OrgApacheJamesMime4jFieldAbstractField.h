//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgApacheJamesMime4jDomFieldParsedField-Protocol.h"

@class NSString, OrgApacheJamesMime4jCodecDecodeMonitor;
@protocol OrgApacheJamesMime4jStreamField;

@interface OrgApacheJamesMime4jFieldAbstractField : NSObject <OrgApacheJamesMime4jDomFieldParsedField>
{
    id <OrgApacheJamesMime4jStreamField> rawField_;
    OrgApacheJamesMime4jCodecDecodeMonitor *monitor_;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getRawField;
- (id)getParseException;
- (_Bool)isValidField;
- (id)getRaw;
- (id)getBody;
- (id)getName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
