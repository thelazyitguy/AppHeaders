//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFTrendingChatsThumbsCellContent-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC8libFunny13TrendingModel : NSObject <IFTrendingChatsThumbsCellContent>
{
    // Error parsing type: , name: isDataLoaded
    // Error parsing type: , name: chats
    // Error parsing type: , name: delegate
    // Error parsing type: , name: networkChatsService
}

- (void).cxx_destruct;
- (id)init;
- (void)loadData;
- (id)chatInfoAtIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool isDataLoaded; // @synthesize isDataLoaded;
@property(nonatomic, readonly) unsigned long long numberOfChats;

@end
