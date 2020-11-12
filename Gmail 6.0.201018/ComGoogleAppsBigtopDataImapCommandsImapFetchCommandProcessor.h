//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataImapMimeMimeBodyStructureParser, ComGoogleAppsBigtopDataMailconnectionParsedResponseExceptionHandler, ComGoogleAppsBigtopDataMimeMimeMessageParser;
@protocol ComGoogleAppsBigtopDataMessageregionApiMessageRegionParser, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataImapCommandsImapFetchCommandProcessor : NSObject
{
    ComGoogleAppsBigtopDataMimeMimeMessageParser *messageParser_;
    ComGoogleAppsBigtopDataImapMimeMimeBodyStructureParser *bodyStructureParser_;
    id <ComGoogleAppsBigtopDataMessageregionApiMessageRegionParser> messageRegionsCreator_;
    ComGoogleAppsBigtopDataMailconnectionParsedResponseExceptionHandler *parsedResponseExceptionHandler_;
    id <JavaxInjectProvider> imapExecutor_;
}

+ (void)initialize;
- (void)dealloc;
- (id)fetchMessagePartsAsInputStreamsWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withLong:(long long)arg3;
- (id)fetchUnclippedMessageBodyAsInputStreamsWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withComGoogleAppsBigtopDataImapImapProto_ImapMessageBodyPart:(id)arg2 withLong:(long long)arg3 withNSString:(id)arg4 withNSString:(id)arg5;
- (id)fetchMessageBodyWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withComGoogleAppsBigtopDataImapImapProto_ImapMessageBodyPart:(id)arg2 withLong:(long long)arg3 withNSString:(id)arg4;
- (id)fetchMessageSummariesInSequenceNumberRangeWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withComGoogleAppsBigtopDataImapImapProto_ImapFolder:(id)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)fetchMessageSummariesBySequenceNumbersWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withComGoogleAppsBigtopDataImapImapProto_ImapFolder:(id)arg2 withJavaUtilCollection:(id)arg3;
- (id)fetchMessageSummariesInUidRangeWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withComGoogleAppsBigtopDataImapImapProto_ImapFolder:(id)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)fetchMessageSummariesByUidsWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withComGoogleAppsBigtopDataImapImapProto_ImapFolder:(id)arg2 withJavaUtilCollection:(id)arg3;
- (id)fetchMessageFlagsByUidsWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)fetchUidsByMessageSequenceNumbersWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withJavaUtilCollection:(id)arg2;

@end
