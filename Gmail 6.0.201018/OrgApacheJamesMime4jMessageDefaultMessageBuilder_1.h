//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgApacheJamesMime4jParserAbstractContentHandler.h"

@class OrgApacheJamesMime4jCodecDecodeMonitor, OrgApacheJamesMime4jMessageHeaderImpl, OrgApacheJamesMime4jParserMimeStreamParser;
@protocol OrgApacheJamesMime4jDomFieldParser;

@interface OrgApacheJamesMime4jMessageDefaultMessageBuilder_1 : OrgApacheJamesMime4jParserAbstractContentHandler
{
    OrgApacheJamesMime4jParserMimeStreamParser *val$parser_;
    id <OrgApacheJamesMime4jDomFieldParser> val$fp_;
    OrgApacheJamesMime4jCodecDecodeMonitor *val$mon_;
    OrgApacheJamesMime4jMessageHeaderImpl *val$header_;
}

- (void)dealloc;
- (void)fieldWithOrgApacheJamesMime4jStreamField:(id)arg1;
- (void)endHeader;

@end
