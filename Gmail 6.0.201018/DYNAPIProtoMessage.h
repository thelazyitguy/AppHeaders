//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class DYNAPIProtoActionResponse, DYNAPIProtoConversation, DYNAPIProtoSpace, DYNAPIProtoThread, GPBTimestamp, NSMutableArray, NSString;

@interface DYNAPIProtoMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) DYNAPIProtoActionResponse *actionResponse; // @dynamic actionResponse;
@property(copy, nonatomic) NSString *argumentText; // @dynamic argumentText;
@property(retain, nonatomic) NSMutableArray *attachmentArray; // @dynamic attachmentArray;
@property(readonly, nonatomic) unsigned long long attachmentArray_Count; // @dynamic attachmentArray_Count;
@property(retain, nonatomic) DYNAPIProtoConversation *conversation; // @dynamic conversation;
@property(retain, nonatomic) GPBTimestamp *createTime; // @dynamic createTime;
@property(copy, nonatomic) NSString *fallbackText; // @dynamic fallbackText;
@property(nonatomic) _Bool hasActionResponse; // @dynamic hasActionResponse;
@property(nonatomic) _Bool hasConversation; // @dynamic hasConversation;
@property(nonatomic) _Bool hasCreateTime; // @dynamic hasCreateTime;
@property(nonatomic) _Bool hasSpace; // @dynamic hasSpace;
@property(nonatomic) _Bool hasThread; // @dynamic hasThread;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *previewText; // @dynamic previewText;
@property(retain, nonatomic) DYNAPIProtoSpace *space; // @dynamic space;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) DYNAPIProtoThread *thread; // @dynamic thread;

@end
