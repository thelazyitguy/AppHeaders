//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class OrgApacheJamesMime4jStreamRawField;
@protocol OrgApacheJamesMime4jStreamBodyDescriptor, OrgApacheJamesMime4jStreamBodyDescriptorBuilder, OrgApacheJamesMime4jStreamField;

@protocol OrgApacheJamesMime4jStreamBodyDescriptorBuilder <JavaObject>
- (id <OrgApacheJamesMime4jStreamBodyDescriptorBuilder>)newChild;
- (id <OrgApacheJamesMime4jStreamBodyDescriptor>)build;
- (id <OrgApacheJamesMime4jStreamField>)addFieldWithOrgApacheJamesMime4jStreamRawField:(OrgApacheJamesMime4jStreamRawField *)arg1;
- (void)reset;
@end
