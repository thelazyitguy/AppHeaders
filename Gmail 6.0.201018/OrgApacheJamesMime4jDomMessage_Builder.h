//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgApacheJamesMime4jInternalAbstractEntityBuilder.h"

@class OrgApacheJamesMime4jCodecDecodeMonitor, OrgApacheJamesMime4jStreamMimeConfig;
@protocol OrgApacheJamesMime4jDomFieldParser, OrgApacheJamesMime4jMessageBodyFactory, OrgApacheJamesMime4jStreamBodyDescriptorBuilder;

@interface OrgApacheJamesMime4jDomMessage_Builder : OrgApacheJamesMime4jInternalAbstractEntityBuilder
{
    OrgApacheJamesMime4jStreamMimeConfig *config_;
    OrgApacheJamesMime4jCodecDecodeMonitor *monitor_;
    id <OrgApacheJamesMime4jStreamBodyDescriptorBuilder> bodyDescBuilder_;
    id <OrgApacheJamesMime4jDomFieldParser> fieldParser_;
    id <OrgApacheJamesMime4jMessageBodyFactory> bodyFactory_;
    _Bool flatMode_;
    _Bool rawContent_;
}

- (void)dealloc;
- (id)build;
- (id)parseWithJavaIoInputStream:(id)arg1;
- (id)setReplyToWithJavaUtilCollection:(id)arg1;
- (id)setReplyToWithOrgApacheJamesMime4jDomAddressAddressArray:(id)arg1;
- (id)setReplyToWithOrgApacheJamesMime4jDomAddressAddress:(id)arg1;
- (id)getReplyTo;
- (id)setBccWithJavaUtilCollection:(id)arg1;
- (id)setBccWithOrgApacheJamesMime4jDomAddressAddressArray:(id)arg1;
- (id)setBccWithOrgApacheJamesMime4jDomAddressAddress:(id)arg1;
- (id)getBcc;
- (id)setCcWithJavaUtilCollection:(id)arg1;
- (id)setCcWithOrgApacheJamesMime4jDomAddressAddressArray:(id)arg1;
- (id)setCcWithOrgApacheJamesMime4jDomAddressAddress:(id)arg1;
- (id)getCc;
- (id)setToWithJavaUtilCollection:(id)arg1;
- (id)setToWithNSStringArray:(id)arg1;
- (id)setToWithOrgApacheJamesMime4jDomAddressAddressArray:(id)arg1;
- (id)setToWithNSString:(id)arg1;
- (id)setToWithOrgApacheJamesMime4jDomAddressAddress:(id)arg1;
- (id)getTo;
- (id)setFromWithJavaUtilCollection:(id)arg1;
- (id)setFromWithNSStringArray:(id)arg1;
- (id)setFromWithOrgApacheJamesMime4jDomAddressMailboxArray:(id)arg1;
- (id)setFromWithNSString:(id)arg1;
- (id)setFromWithOrgApacheJamesMime4jDomAddressMailbox:(id)arg1;
- (id)getFrom;
- (id)setSenderWithNSString:(id)arg1;
- (id)setSenderWithOrgApacheJamesMime4jDomAddressMailbox:(id)arg1;
- (id)getSender;
- (id)setDateWithJavaUtilDate:(id)arg1 withJavaUtilTimeZone:(id)arg2;
- (id)setDateWithJavaUtilDate:(id)arg1;
- (id)getDate;
- (id)setSubjectWithNSString:(id)arg1;
- (id)getSubject;
- (id)setMessageIdWithNSString:(id)arg1;
- (id)generateMessageIdWithNSString:(id)arg1;
- (id)getMessageId;
- (id)setBodyWithByteArray:(id)arg1 withNSString:(id)arg2;
- (id)setBodyWithNSString:(id)arg1 withNSString:(id)arg2 withJavaNioCharsetCharset:(id)arg3;
- (id)setBodyWithNSString:(id)arg1 withJavaNioCharsetCharset:(id)arg2;
- (id)setBodyWithOrgApacheJamesMime4jDomMessage:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomMultipart:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomBinaryBody:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomTextBody:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomBody:(id)arg1;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2 withLong:(long long)arg3 withJavaUtilDate:(id)arg4 withJavaUtilDate:(id)arg5 withJavaUtilDate:(id)arg6;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2 withLong:(long long)arg3;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setContentDispositionWithNSString:(id)arg1;
- (id)setContentTypeWithNSString:(id)arg1 withOrgApacheJamesMime4jStreamNameValuePairArray:(id)arg2;
- (id)setContentTransferEncodingWithNSString:(id)arg1;
- (id)clearFields;
- (id)removeFieldsWithNSString:(id)arg1;
- (id)addFieldWithOrgApacheJamesMime4jStreamField:(id)arg1;
- (id)setFieldWithOrgApacheJamesMime4jStreamField:(id)arg1;
- (id)copy__WithOrgApacheJamesMime4jDomMessage:(id)arg1;
- (id)disableContentDecoding;
- (id)enableContentDecoding;
- (id)disableFlatMode;
- (id)enableFlatMode;
- (id)useWithOrgApacheJamesMime4jMessageBodyFactory:(id)arg1;
- (id)useWithOrgApacheJamesMime4jDomFieldParser:(id)arg1;
- (id)useWithOrgApacheJamesMime4jStreamBodyDescriptorBuilder:(id)arg1;
- (id)useWithOrgApacheJamesMime4jCodecDecodeMonitor:(id)arg1;
- (id)useWithOrgApacheJamesMime4jStreamMimeConfig:(id)arg1;

@end
