//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithExternalResponseProcessor.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIContactsUsersCommand : TFSTwitterAPICommandWithExternalResponseProcessor
{
    _Bool _includeRelationships;
    NSNumber *_count;
    NSString *_cursor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool includeRelationships; // @synthesize includeRelationships=_includeRelationships;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (id)request;
- (id)initWithAccountID:(id)arg1 count:(id)arg2 cursor:(id)arg3 includeRelationships:(_Bool)arg4 context:(id)arg5 source:(unsigned long long)arg6 responseModelBuilder:(id)arg7 responseProcessorBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;

@end
