// eslint-disable
// this is an auto generated file. This will be overwritten

export const getUser = `query GetUser($id: ID!) {
  getUser(id: $id) {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const listUsers = `query ListUsers(
  $filter: ModelUserFilterInput
  $limit: Int
  $nextToken: String
) {
  listUsers(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      owner
      name
      createdAt
      heroes {
        items {
          id
          name
          createdAt
          isOnline
          honor
          level
          exp
          title
          lore
        }
        nextToken
      }
    }
    nextToken
  }
}
`;
export const getHero = `query GetHero($id: ID!) {
  getHero(id: $id) {
    id
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
    }
  }
}
`;
export const listHeros = `query ListHeros(
  $filter: ModelHeroFilterInput
  $limit: Int
  $nextToken: String
) {
  listHeros(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      user {
        id
        owner
        name
        createdAt
      }
      name
      createdAt
      image {
        bucket
        region
        key
      }
      isOnline
      honor
      level
      exp
      title
      race {
        id
        name
        description
      }
      lore
      skills {
        id
        name
        rank
        description
      }
    }
    nextToken
  }
}
`;
export const getSquad = `query GetSquad($id: ID!) {
  getSquad(id: $id) {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
    }
  }
}
`;
export const listSquads = `query ListSquads(
  $filter: ModelSquadFilterInput
  $limit: Int
  $nextToken: String
) {
  listSquads(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      owner
      name
      createdAt
      open
      quests {
        items {
          id
          owner
          createdAt
          updatedAt
          isTaken
          status
          name
          lore
          honorReward
        }
        nextToken
      }
    }
    nextToken
  }
}
`;
export const getQuest = `query GetQuest($id: ID!) {
  getQuest(id: $id) {
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
    }
  }
}
`;
export const listQuests = `query ListQuests(
  $filter: ModelQuestFilterInput
  $limit: Int
  $nextToken: String
) {
  listQuests(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      owner
      createdAt
      updatedAt
      isTaken
      status
      name
      lore
      requirements {
        id
        name
        rank
        description
      }
      honorReward
      file {
        bucket
        region
        key
      }
      squad {
        id
        owner
        name
        createdAt
        open
      }
    }
    nextToken
  }
}
`;
export const searchHeros = `query SearchHeros(
  $filter: SearchableHeroFilterInput
  $sort: SearchableHeroSortInput
  $limit: Int
  $nextToken: Int
) {
  searchHeros(
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
    items {
      id
      user {
        id
        owner
        name
        createdAt
      }
      name
      createdAt
      image {
        bucket
        region
        key
      }
      isOnline
      honor
      level
      exp
      title
      race {
        id
        name
        description
      }
      lore
      skills {
        id
        name
        rank
        description
      }
    }
    nextToken
  }
}
`;
export const searchSquads = `query SearchSquads(
  $filter: SearchableSquadFilterInput
  $sort: SearchableSquadSortInput
  $limit: Int
  $nextToken: Int
) {
  searchSquads(
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
    items {
      id
      owner
      name
      createdAt
      open
      quests {
        items {
          id
          owner
          createdAt
          updatedAt
          isTaken
          status
          name
          lore
          honorReward
        }
        nextToken
      }
    }
    nextToken
  }
}
`;
export const searchQuests = `query SearchQuests(
  $filter: SearchableQuestFilterInput
  $sort: SearchableQuestSortInput
  $limit: Int
  $nextToken: Int
) {
  searchQuests(
    filter: $filter
    sort: $sort
    limit: $limit
    nextToken: $nextToken
  ) {
    items {
      id
      owner
      createdAt
      updatedAt
      isTaken
      status
      name
      lore
      requirements {
        id
        name
        rank
        description
      }
      honorReward
      file {
        bucket
        region
        key
      }
      squad {
        id
        owner
        name
        createdAt
        open
      }
    }
    nextToken
  }
}
`;
