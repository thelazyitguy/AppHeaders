//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgApacheJamesMime4jFieldAbstractField.h"

#import "OrgApacheJamesMime4jDomFieldContentTransferEncodingField-Protocol.h"

@class NSString;

@interface OrgApacheJamesMime4jFieldContentTransferEncodingFieldImpl : OrgApacheJamesMime4jFieldAbstractField <OrgApacheJamesMime4jDomFieldContentTransferEncodingField>
{
    _Bool parsed_;
    NSString *encoding_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getEncoding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
