//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Analytics/SEGPayload.h>

@class NSDictionary, NSString;

@interface SEGGroupPayload : SEGPayload
{
    NSString *_groupId;
    NSDictionary *_traits;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (id)initWithGroupId:(id)arg1 traits:(id)arg2 context:(id)arg3 integrations:(id)arg4;

@end
