//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgApacheJamesMime4jFieldContentdispositionParserContentDispositionParserConstants-Protocol.h"

@class IOSIntArray, NSString, OrgApacheJamesMime4jFieldContentdispositionParserContentDispositionParserTokenManager, OrgApacheJamesMime4jFieldContentdispositionParserSimpleCharStream, OrgApacheJamesMime4jFieldContentdispositionParserToken;
@protocol JavaUtilList;

@interface OrgApacheJamesMime4jFieldContentdispositionParserContentDispositionParser : NSObject <OrgApacheJamesMime4jFieldContentdispositionParserContentDispositionParserConstants>
{
    OrgApacheJamesMime4jFieldContentdispositionParserContentDispositionParserTokenManager *token_source_;
    OrgApacheJamesMime4jFieldContentdispositionParserSimpleCharStream *jj_input_stream_;
    OrgApacheJamesMime4jFieldContentdispositionParserToken *token_;
    OrgApacheJamesMime4jFieldContentdispositionParserToken *jj_nt_;
    NSString *dispositionType_;
    id <JavaUtilList> paramNames_;
    id <JavaUtilList> paramValues_;
    int jj_ntk_;
    int jj_gen_;
    IOSIntArray *jj_la1_;
    id <JavaUtilList> jj_expentries_;
    IOSIntArray *jj_expentry_;
    int jj_kind_;
}

+ (void)initialize;
- (void)dealloc;
- (void)disable_tracing;
- (void)enable_tracing;
- (id)generateParseException;
- (id)getTokenWithInt:(int)arg1;
- (id)getNextToken;
- (void)ReInitWithOrgApacheJamesMime4jFieldContentdispositionParserContentDispositionParserTokenManager:(id)arg1;
- (void)ReInitWithJavaIoReader:(id)arg1;
- (void)ReInitWithJavaIoInputStream:(id)arg1 withNSString:(id)arg2;
- (void)ReInitWithJavaIoInputStream:(id)arg1;
- (id)value;
- (void)parameter;
- (void)parse;
- (void)parseAll;
- (void)parseLine;
- (id)getParamValues;
- (id)getParamNames;
- (id)getDispositionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
