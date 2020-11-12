//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilList, JavaUtilMap, OrgApacheJamesMime4jDomBody;

@interface OrgApacheJamesMime4jInternalAbstractEntityBuilder : NSObject
{
    id <JavaUtilList> fields_;
    id <JavaUtilMap> fieldMap_;
    id <OrgApacheJamesMime4jDomBody> body_;
}

- (void)dealloc;
- (id)getBody;
- (id)setBodyWithOrgApacheJamesMime4jDomMultipart:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomMessage:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomBinaryBody:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomTextBody:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomBody:(id)arg1;
- (id)getReadDate;
- (id)getModificationDate;
- (id)getCreationDate;
- (long long)getSize;
- (id)getFilename;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2 withLong:(long long)arg3 withJavaUtilDate:(id)arg4 withJavaUtilDate:(id)arg5 withJavaUtilDate:(id)arg6;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2 withLong:(long long)arg3;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setContentDispositionWithNSString:(id)arg1;
- (id)getDispositionType;
- (id)setContentTransferEncodingWithNSString:(id)arg1;
- (id)getContentTransferEncoding;
- (id)setContentTypeWithNSString:(id)arg1 withOrgApacheJamesMime4jStreamNameValuePairArray:(id)arg2;
- (id)getCharset;
- (id)getMimeType;
- (id)obtainFieldWithNSString:(id)arg1;
- (id)clearFields;
- (id)setFieldWithOrgApacheJamesMime4jStreamField:(id)arg1;
- (id)removeFieldsWithNSString:(id)arg1;
- (id)getFieldsWithNSString:(id)arg1 withIOSClass:(id)arg2;
- (id)getFieldsWithNSString:(id)arg1;
- (_Bool)containsFieldWithNSString:(id)arg1;
- (id)getFieldWithNSString:(id)arg1 withIOSClass:(id)arg2;
- (id)getFieldWithNSString:(id)arg1;
- (id)getFields;
- (id)addFieldWithOrgApacheJamesMime4jStreamField:(id)arg1;

@end
