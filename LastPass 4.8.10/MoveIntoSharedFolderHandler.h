//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ServerRequest, ShareInfo;

@interface MoveIntoSharedFolderHandler : NSObject
{
    ServerRequest *m_serverRequest;
    ShareInfo *m_si;
    NSMutableDictionary *m_aids;
    _Bool m_copy;
    _Bool m_onlycheck;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_aids; // @synthesize m_aids;
@property(retain, nonatomic) ShareInfo *m_si; // @synthesize m_si;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)handleError:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)moveIntoSharedFolder:(id)arg1 aids:(id)arg2 copy:(_Bool)arg3 onlycheck:(_Bool)arg4 skipcheck:(_Bool)arg5;

@end
