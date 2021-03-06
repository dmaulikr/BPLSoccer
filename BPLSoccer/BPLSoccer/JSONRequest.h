//
//  JSONRequests.h
//  BPLSoccer
//
//  Created by Byron Becker on 12/15/13.
//  Copyright (c) 2013 Byron Becker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JSONRequest : NSObject
-(NSMutableArray*)requestLatestResults:(NSString *)team;
-(NSMutableArray*)requestTeamFixtures:(NSString *)team;
-(NSMutableArray*)requestLeagueStandings;
-(NSMutableArray*)requestTopScorers;
@end
