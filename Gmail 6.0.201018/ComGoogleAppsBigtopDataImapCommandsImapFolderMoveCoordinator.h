//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataImapCommandsImapCopyCommandProcessor, ComGoogleAppsBigtopDataImapCommandsImapDeleteMessagesCoordinator, ComGoogleAppsBigtopDataImapCommandsImapMoveCommandProcessor;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataImapCommandsImapFolderMoveCoordinator : NSObject
{
    ComGoogleAppsBigtopDataImapCommandsImapCopyCommandProcessor *copyCommandProcessor_;
    ComGoogleAppsBigtopDataImapCommandsImapDeleteMessagesCoordinator *deleteCoordinator_;
    ComGoogleAppsBigtopDataImapCommandsImapMoveCommandProcessor *moveCommandProcessor_;
    id <JavaxInjectProvider> imapExecutor_;
}

- (void)dealloc;
- (id)moveMessagesToFolderWithComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withComGoogleAppsBigtopDataImapImapProto_ImapFolder:(id)arg3;

@end
