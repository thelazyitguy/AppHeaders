//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgApacheJamesMime4jFieldMimeversionParserMimeVersionParserConstants-Protocol.h"

@class IOSIntArray, NSString, OrgApacheJamesMime4jFieldMimeversionParserMimeVersionParserTokenManager, OrgApacheJamesMime4jFieldMimeversionParserSimpleCharStream, OrgApacheJamesMime4jFieldMimeversionParserToken;
@protocol JavaUtilList;

@interface OrgApacheJamesMime4jFieldMimeversionParserMimeVersionParser : NSObject <OrgApacheJamesMime4jFieldMimeversionParserMimeVersionParserConstants>
{
    OrgApacheJamesMime4jFieldMimeversionParserMimeVersionParserTokenManager *token_source_;
    OrgApacheJamesMime4jFieldMimeversionParserSimpleCharStream *jj_input_stream_;
    OrgApacheJamesMime4jFieldMimeversionParserToken *token_;
    OrgApacheJamesMime4jFieldMimeversionParserToken *jj_nt_;
    int major_;
    int minor_;
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
- (void)ReInitWithOrgApacheJamesMime4jFieldMimeversionParserMimeVersionParserTokenManager:(id)arg1;
- (void)ReInitWithJavaIoReader:(id)arg1;
- (void)ReInitWithJavaIoInputStream:(id)arg1 withNSString:(id)arg2;
- (void)ReInitWithJavaIoInputStream:(id)arg1;
- (void)parse;
- (void)parseAll;
- (void)parseLine;
- (int)getMajorVersion;
- (int)getMinorVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
